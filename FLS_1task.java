public class Main {
    public static boolean check3(int a){
        return ((a%3==0)&&(a%5!=0));
    }
    public static boolean check5(int a){
        return ((a%3!=0)&&(a%5==0));
    }
    public static boolean check35(int a){
        return ((a%3==0)&&(a%5==0));
    }
    public static void check(int N) {
        for (int i = 1;i<=N;i++){
            if (check3(i))
                System.out.println("Фиг");
            if (check5(i))
                System.out.println("Вам");
            if (check35(i))
                System.out.println("ФигВам");
            if (!((check3(i))&&(check5(i))&&(check35(i))))
                System.out.println(i);
        }
    }
    public static void main(String[] args) throws Exception {
        check(15);
    }
}