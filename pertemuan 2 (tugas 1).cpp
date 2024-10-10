
int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}
int main() {
   
    int x = 10;
    int y = 20;

    cout << "nilai minimum nya : "<< min(x, y) << endl;
    for (int i = 0; i < 10; i++) {
        // sak loopingan nilai ne di tambah 1
        x++;
        y++;
    
        cout << "looping ke: " << (i + 1) << ": " << min(x, y) << endl;
    }
    return 0;
}





