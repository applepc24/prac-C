typedef struct {
    int hour;
    int minute;
    int second;
} Time;


int main() {
    Time t1, t2;
    int h, m, s;

    scanf("%d %d %d", &t1.hour, &t1.minute, &t1.second);
    scanf("%d %d %d", &t2.hour, &t2.minute, &t2.second);

    // 시 분 초를 초로 환산해서 각 total에 저장
    int total1 = t1.hour *3600 + t1.minute *60 + t1.second;
    int total2 = t2.hour *3600 + t2.minute *60 + t2.second;

    // 초로 환산된 total 값을 최종 result에 저장
    int result = total2 - total1;

    // 다시 최종 result 값에서 3600을 나눠서 몫을 저장하면 시간이 나옴 1시간 30분 =  5400 / 3600 = 1시간
    h = result / 3600;
    // result 값에서 3600을 나눈 나머지 값을 result에 저장하면 분이 나옴 1시간 30분 = 5400 % 3600 = 30분
    result %= 3600;
    // 남은 분에 60을 나눠주고 남은 값이 분
    m = result / 60;
    // 남은 값에 60을 나눠주고 남은 값은 초
    s = result % 60;

    printf("%d %d %d\n", h,m,s);
    
    return 0;
}

