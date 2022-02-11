// 1. Encontrar los errores mejorables mediante la refactorización.
// 2. Entender el código.
// 3. Mejorar el código.

int main() {
    int n;
    int s = 0;
    double m = 0;
    int i;
    for (i = 0 ; i < 2000 && n != -1 ; i++){
        cin >> n;
        s += n;
    }
    m = (s+1)/(i-1);
    s = 0;
    while (m < 5){
        m = 0;
        n = 0;
        for (i = 0 ; i < 2000 && n != -1 ; i++){
            cin >> n;
            s += n;
        }
        m = (s+1)/(i-1);
    }
    if (m >= 5){ 
        cout << "apto";
    }
    else if (m > 9){
        cout << "super apto";
    }
  return 0;
}