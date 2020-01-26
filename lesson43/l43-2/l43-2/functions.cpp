#include "functions.h"

void solve(){
    int cnt;
    cin >> cnt;
    Hotel h(cnt);
    int n;
    cin >> n;
    char c[30];
    for(int i = 0; i < n; i++){
        cin >> c;
        if(!strcmp(c, "RESERVE")){
            int p;
            cin >> p;
            cout << h.find_room(p) << endl;
        }else if(!strcmp(c, "FREE")){
            int p;
            cin >> p;
            h.get_room(p).free();
        }else if(!strcmp(c, "STATUS")){
            cout << h.count_free() << endl;
        }else{

        }
    }
}
