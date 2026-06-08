class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        int l=0,r=n-1,count=0;
        sort(people.begin(),people.end());
        while(l<=r){//<= because at the end there will be only one person left and even he needs to be counted so he will be counted twice and a seperate boat will be given to that person 
//if u write only < there will be two people left and no boat will be alotted 
            if(people[l]+people[r]<=limit){//here <= because its given atmost so if weight is less then also its ok u can send them and if weight is eqaul then also u can send them.
                l++;
            }
            r--;
            count++;
            
            

        }
        return count;
    }
};