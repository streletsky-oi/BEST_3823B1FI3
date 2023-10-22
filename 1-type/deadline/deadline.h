int get_score(short score, int start, int stop, int now) {
    if (now <= start){
        return(score);
    }
    else if(now < stop){
        double newscore;
        newscore == round(score - (score / (stop - start)) * (now - start)); 
        return newscore;
    }

    else{
        score = score / 2;
        return(score);
    }
}
