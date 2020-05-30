#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int slides_cnt, lost, d_beg = 0, d_end = 0;
    vector<int> slides;

    cin >> slides_cnt >> lost;

    slides.resize(slides_cnt - lost);

    for(int i = 0; i < slides_cnt - lost; i++)
        cin >> slides[i];

    sort(begin(slides), end(slides));

    //Проверим начало диапазона
    if(*slides.begin() != 1){
        d_beg = *slides.begin() - 1;
    }

    //Проверим конец диапазона
    if(*(slides.end()-1) != slides_cnt){
        d_end = slides_cnt - *(slides.end()-1);
    }


    int from = 0, to = 0;
    for(int i = 1; i < slides_cnt - lost; i++)
    {

        if(slides[i] - slides[i - 1] > to - from)
        {
            from = slides[i - 1];
            to = slides[i];
        }
    }

    if(d_end > d_beg && d_end > to-from-1){
        cout << *(slides.end() - 1) + 1 << ' ' << slides_cnt;
    }else if(d_beg > d_end && d_beg > to-from-1){
        cout << 1 << ' ' << *(slides.begin()) - 1;
    }else{
        cout << from + 1 << ' ' << to - 1;
    }
    return 0;
}
