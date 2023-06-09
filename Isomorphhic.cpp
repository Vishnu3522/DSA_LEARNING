 bool areIsomorphic(string str1, string str2){
   if(str1.length()!=str2.length()){
       return false;
   }
   unordered_map<char,char>charmap;
   unordered_set<char>usedchar;
   for(int i =0;i<str1.length();i++){
       char c1 = str1[i];
       char c2 = str2[i];
       
       if(charmap.find(c1)!=charmap.end()){
           if(charmap[c1]!=c2){
               return false;
           }
           else{
              continue;
           }
       }
       if(usedchar.find(c2)!=usedchar.end()){
           return false;
       }
       charmap[c1]=c2;
       usedchar.insert(c2);
      
   }
    return true;
}