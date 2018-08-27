public class No42{

    public static void mian(String[] args){
        String string="I am a student.";

        reverseSentence(string);
    }

    private static void reverseSentence(String str){
        if (str == null)
            return ;
        char[] arr=str.toCharArray();

        reverse(arr, 0, arr.length-1);

        int start = 0;
        int end = 0;
        for (char i = 0;i < arr.length;i++){
            if(arr[i] == ' '){
                reverse(arr, start, end);
                end++;
                start=end;
            }else if(i == arr.length){
                end++;
                reverse(arr, start, end);
            }
            else{
                end++;
            }
        }
        for(char c:arr){
            System.out.print(c);
        }
    private static void reverse(char[] arr, int start, int end){
        for (int i=start, j=end;i<=j;i++,jm--){
            char temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    }

