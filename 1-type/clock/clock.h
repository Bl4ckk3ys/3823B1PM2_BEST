int get_time(long long angle) {
    int ans = 0;
    ans += (int)((double)angle/8640)*10000;
    ans += (int)((double)angle/360)*100;
    ans += angle%360/6;
    return ans; 
}