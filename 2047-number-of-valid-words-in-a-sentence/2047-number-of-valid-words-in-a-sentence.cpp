class Solution {
public:
    bool check(string sk)
    {
        for(int i=0;i<sk.size();i++)
        {
            if(isdigit(sk[i]))
            {
                return true;
                break;
            }
        }
        return false;
    }
    bool check2(string word)
    {
        int k=count(word.begin(),word.end(),'-');
        if(k==0)
            return false;
        if(k>1)
            return true;
        else
        {
            if(word[0]=='-'||word[word.size()-1]=='-')
                return true;
            else
            {
                for(int i=0;i<word.size();i++)
                {
                    if(word[i]=='-')
                    {
                        if(isalpha(word[i-1])&&isalpha(word[i+1]))
                            continue;
                        else
                            return true;
                    }
                    
                }
            }
                
            
        }
        return false;
    }
    int countValidWords(string s) {
        istringstream shikhar(s);
        int abcd=0;
        do
        {
            string word;
            shikhar>>word;
            int n=word.size();
            cout<<word<<" :"<<n<<endl;
            if(n!=0){
            if(word[0]=='-'||word[n-1]=='-'||count(word.begin(),word.end(),'-')>1||check(word)||check2(word))
               {
                   abcd+=0;
                   
               }
               else
               {
                   if(count(word.begin(),word.end(),'!')>1||count(word.begin(),word.end(),'.')>1||count(word.begin(),word.end(),',')>1)
                       abcd+=0;
                   else if(count(word.begin(),word.end(),'!')==1&&word[n-1]!='!'||(count(word.begin(),word.end(),',')==1&&word[n-1]!=',')||(count(word.begin(),word.end(),'.')==1&&word[n-1]!='.'))
                       abcd+=0;
                   else
                       abcd+=1;
                   
               }
          
        }}while(shikhar);
        
        return abcd;
        
        
    }
};