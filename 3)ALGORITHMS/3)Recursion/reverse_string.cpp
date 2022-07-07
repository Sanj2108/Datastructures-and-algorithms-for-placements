//pass string by reference
void rev(int i,int j,string& str){
    if(i>j){
        return;
    }
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;
    rev(i,j,str);
    
}
