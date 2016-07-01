#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//char型ポインタのbufを値をNULLで宣言
	char *buf = NULL;
	//用意した変数bufに100バイトのメモリ領域をchar型にキャストして確保
	buf = (char*)malloc(100);

	//bufがNULLだったらエラーを返す
	if (buf == NULL) {
		printf("メモリ確保に失敗しました\n");
		return -1;
	}

	//メモリ領域を確保したbufに配列と同じように文字を入れて出力
	sprintf(buf, "配列と同じように扱えます。");
	printf("%s", buf);

	//確保したメモリ領域の解放（最後に必ず解放すること）
	free(buf);

	return 0;
}