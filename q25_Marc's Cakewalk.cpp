#PrepareAlgorithmsGreedyMarc's Cakewalk

/*
 * Complete the 'marcsCakewalk' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER_ARRAY calorie as parameter.
 */

long marcsCakewalk(vector<int> calorie) {
sort(calorie.begin(),calorie.end(),greater <int>());
long sum=0;
int n= calorie.size();

for(int i =0;i<n;i++)
{
   long temp= pow(2,i);
//    cout<<"temp:"<<temp<<endl;
//    cout<<"val"<<calorie[i]<<endl;

    sum+=calorie[i]*temp;
    
    //  cout<<"a: "<<temp<<endl;
    // cout<<"ans: "<<sum<<endl;
}
return sum;
}
