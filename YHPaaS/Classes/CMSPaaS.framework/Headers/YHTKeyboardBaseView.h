//
//  YHTKeyboardBaseView.h
//  cmsmobilesecurities
//
//  Created by 蒲公英 on 2020/11/19.
//  Copyright © 2020 cms. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YHTKeyboardButtonItem.h"
#import "YHTKeyboardViewDelegate.h"

#define windowSafeAreaInsets \
({UIEdgeInsets windowSafeAreaInsets = UIEdgeInsetsZero;\
if (@available(iOS 11.0, *)) {\
windowSafeAreaInsets = [[UIApplication sharedApplication] delegate].window.safeAreaInsets;\
}\
(windowSafeAreaInsets);})

#define isIPhoneX (windowSafeAreaInsets.bottom > 0)

#define BOTTOM_HEIGHT               (isIPhoneX ? 30 : 0)
#define HEIGHT_WIDTH_RATIO          216/375.0
#define YHTKeyboardTypeKeyword      @"YHTKeyboardTypeKeyword"

const static CGFloat middlePadding = 5;
const static CGFloat leftPadding = 4;
const static CGFloat rightPadding = 4;
const static CGFloat topPadding = 4;
const static CGFloat bottomPadding = 4;

const static CGFloat alphaTopPadding = 10;
const static CGFloat alphaBottomPadding = 4;
const static CGFloat alphaLeftPadding = 4;
const static CGFloat alphaRightPadding = 4;
const static CGFloat alphaRowPadding = 12;
const static CGFloat alphaColumnPadding = 6;

typedef NS_ENUM(NSInteger, YHTSupportKeyboardType) {
    YHTSupportKeyboardTypeNumber,       //数字键盘
    YHTSupportKeyboardTypeDecimal,      //支持小数键盘
    YHTSupportKeyboardTypeIDCard,       //身份证类型
    YHTSupportKeyboardTypeStockSearch,  //股票键盘
    YHTSupportKeyboardTypeAlphabetSwitch //字母切换类型
};

typedef NS_ENUM(NSInteger, YHTSupportKeyboardToolType) {
    YHTSupportKeyboardToolTypeCommon,      //仅仅有隐藏按钮
    YHTSupportKeyboardToolTypeComposite    //复合键盘
};

typedef NS_ENUM(NSInteger, YHTKeyboardCustomizeType) {
    YHTKeyboardCustomizeTypeNumber,  //数字键盘
    YHTKeyboardCustomizeTypeAlphabet //字母键盘
};

@interface YHTKeyboardBaseView : UIView

@property (nonatomic, weak) id<YHTKeyboardViewDelegate> delegate;
@property (nonatomic, strong) NSMutableArray <NSMutableArray<UIButton *> *> *numberSubViews;
@property (nonatomic, strong) NSMutableArray <NSMutableArray<UIButton *> *> *alphabetSubViews;
@property (nonatomic, assign) YHTKeyboardCustomizeType customizeType;

@property (nonatomic, strong) UITextField  *textField;
@property (nonatomic, strong) UIView *numberContainerView;
@property (nonatomic, strong) UIView *alpContainerView;

- (instancetype)initWithFrame:(CGRect)frame keyboardDelegate:(id<YHTKeyboardViewDelegate>)keyboardDelegate;

- (NSArray<NSArray<YHTKeyboardButtonItem *> *> *)stockKeyboardNumberItems;
- (NSArray<NSArray<YHTKeyboardButtonItem *> *> *)alphabetItemsWithKeyboardType:(YHTSupportKeyboardType)keyboardType;
- (NSArray<NSArray<YHTKeyboardButtonItem *> *> *)numberItemsWithKeyboardType:(YHTSupportKeyboardType)keyboardType;

/**计算每个item的宽和高*/
- (CGFloat)itemWithRowNumbers:(CGFloat)rowNumbers;
- (CGFloat)itemWithColumnNumbers:(CGFloat)columnNumbers;
- (CGFloat)alphabetItemWithRowNumbers:(CGFloat)rowNumbers;
- (CGFloat)alphabetItemWithColumnNumbers:(CGFloat)columnNumbers;

@end
