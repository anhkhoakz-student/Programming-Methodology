#include<stdio.h>
int main()
{
  int n;
  //sử dụng vòng lặp dowhile để yêu cầu người dùng nhập vào số nguyên dương n
  //nếu n < 0 thì yêu cầu nhập lại
  do
  {
    printf("\nNhập vào số nguyên dương n: ");
    scanf("%d", &n);
    if (n <= 0)
    {
      printf("\nSố n phải >= 0, vui lòng nhập lại! ");
    }
  } while (n <= 0);
  //khai báo biến CheckGiamDan để kiêm tra tính giảm dần
  int CheckGiamDan = 1;
  int themang = n;
  //lấy ra chữ số cuối của n
  int ChuSoCuoi = themang % 10;
  themang /= 10;
 
  printf("\nCác chữ số của %d có giảm dần tử trái sang phải hay không ?\n ", n);
  while(themang != 0)
  {
    //lấy ra chữ số kế cuối
    int ChuSoKeCuoi = themang % 10;
    themang /= 10;
    //nếu chữ số cuối mà lớn hơn chữ số kế cuối thì return false và thoát khỏi vòng lặp
    if (ChuSoCuoi > ChuSoKeCuoi)
    {
      CheckGiamDan = 0;
      break;
    }
    //ngược lại thì cập nhật lại chữ số cho lần so sánh tiếp theo
    else
    {
      ChuSoCuoi = ChuSoKeCuoi;
    }
  }
  //kiểm tra nếu biến CheckGiamDan đúng thì báo đúng
  if(CheckGiamDan)
    printf("\nĐúng !");
  //ngược lại thì báo sai
  else
    printf("Sai !");
 
}