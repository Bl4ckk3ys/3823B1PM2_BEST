int get_score(short score, int start, int stop, int now) {
    
    if (now <= start) return score;
    else if(now>=stop){
        if (score%2 == 1) return (int)(score/2)+1;
        else return score/2;
    }
    else if((now > start) && (now < stop)){
        double r=score*((double)(start-now+stop)/(stop));
        if (r - (int)r>0) return (int)(r+1);
        else return (int)r;
    }
}