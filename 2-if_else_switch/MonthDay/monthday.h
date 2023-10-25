int monthday(int month, int year){
    int leap = 0;
    if (year%400==0 || year%4==0) leap = 1;
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31; break;
        case 4: 
        case 6:
        case 9:
        case 11:return 30; break;
        case 2: switch (leap){
            case 1: return 29;break;
            default: return 28;break;
        }
    }

}