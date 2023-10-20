#pragma once
/**************
*マクロ定義
**************/

/***************
*型定義
***************/

/****************
*プロトタイプ宣言
****************/
int Block_Initialize(void);            //初期化処理
void Block_Update(void);           //更新処理
void Block_Draw(void);             //描画処理

int Get_GenerateFlg(void);        //ブロックの生成判定処理
int Get_Line(void);               //消したラインの数取得処理
