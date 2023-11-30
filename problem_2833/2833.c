int furthestDistanceFromOrigin(char * moves){
    //Returns number of R's and L's
    int R_count, L_count, length = 0;
    int stop = 0;
    while (stop != 1)
    {
        switch(moves[i]){
            case 'R':
                R_count++;
                break;
            case 'L':
                L_count++;
                break;
            case '_':
            default:
                stop = 1;
                break; 
        }
    }
    
}
