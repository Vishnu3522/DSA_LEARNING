 int atoi(string str) {
        int n =  str.length();
        int num = 0;
        int i =0;
        while(str[i]==' '){
            i++;
        }
        bool positive = str[i] =='+';
        bool negative  = str[i] == '-';
        positive ==true ? i++ :i;
        negative == true ? i++ : i;
        while(i<n && str[i]>= '0' && str[i] <= '9'){
            num = num*10+(str[i] - '0');
            i++;
        }
          if (i < n) {
        return -1;  // Invalid input, non-digit character encountered
    }
    num = negative ? -num : num;
    return int(num);
    }