int truckTour(vector<vector<int>> petrolpumps) {
    int n = petrolpumps.size();
    for(int i = 0;i<n;i++){
        int petrol = 0;
        int index = i;
        if (petrolpumps[i][0] < petrolpumps[i][1])
            continue;
        while(true){
            petrol += petrolpumps[index][0];
            petrol -= petrolpumps[index][1];
            
            if(petrol < 0)
                break;
            index = (index + 1)%n;
            if(index == i)
                break;
        }
        if (index == i)
            return i;
        }
        return -1;
}