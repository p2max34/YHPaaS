//
//  ColorKey.h
//  PaaS
//
//  Created by admin on 2020/12/17.
//

/**
 * #333333 不支持皮肤
 *
 * theme://"colorPath"?themeName="themeName"
 * colorPath 协议方法解析
 * themeName 是否指定皮肤（nil 默认 适配皮肤）
 *
 */

#pragma mark global.key

static NSString *stockUpColorKey = @"stockUp";     //涨红、提示、警示
static NSString *stockDownColorKey = @"stockDown";     //跌绿
static NSString *gradientStockUpColorKey = @"gradientStockUp";    //渐变涨
static NSString *gradientStockDownColorKey = @"gradientStockDown";    //渐变跌
static NSString *gradientStockClearColorKey = @"gradientStockClear";    //清空
static NSString *gradientStockNormalColorKey = @"gradientStockNormal";    //平盘
static NSString *secondButtonBackgroundColorKey = @"secondButtonBackground";     //次按钮
static NSString *mainTextColorKey = @"mainText";     //主文案
static NSString *secondTextColorKey = @"secondText";     //次文案、图标颜色
static NSString *detailTextColorKey = @"detailText";     //辅助文案
static NSString *shadowColorKey = @"shadow";     //卡片阴影
static NSString *linkTextColorKey = @"linkText";     //链接文案

static NSString *separateLineColorKey = @"separateLine";      //分割线
static NSString *backgroundColorKey = @"background";     //背景色
static NSString *bottomOperatingAreaColorKey = @"bottomOperatingArea";    //底部操作区
static NSString *mainFunctionColorKey = @"mainFunction";      //功能颜色  红色
static NSString *secondFunctionColorKey = @"secondFunction";      //功能颜色  棕色
static NSString *assistDescriptionTextColorKey = @"assistDescriptionText";     //说明文案、不可点击文案
static NSString *toolTipColorKey = @"toolTip";     //提示条
static NSString *normalBlueColorKey = @"normalBlue";
static NSString *normalGrayColorKey = @"normalGray";
static NSString *labelNormalColorKey = @"labelNormal";
static NSString *labelSelectedColorKey = @"labelSelected";
static NSString *spacingKey = @"spacing";
static NSString *labelBackgroundRedKey = @"labelBackgroundRed";
static NSString *stockIndexUpKey = @"stockIndexUp";
static NSString *stockIndexDownKey = @"stockIndexDown";
static NSString *stockIndexNormalKey = @"stockIndexNormal";
static NSString *tagBackgroundBlueKey = @"tagBackgroundBlue";
static NSString *tagBackgroundYellowKey = @"tagBackgroundYellow";

#pragma mark selfStock key
static NSString *shadowImgViewGradientBackgroundColorKey = @"stockListShadowGradient";

#pragma mark quotes key

static NSString *textTipsViewGradientBackground = @"quotes_textTipsViewGradientBackground";
static NSString *marketChangesLineColorKey = @"quotes_timeSharingChartLine";
static NSString *marketChangesBackgroundGradientColorKey = @"quotes_timeSharingChartGradient";
static NSString *quotes_stockTitleInfoViewGradientBackgroundColorKey = @"quotes_stockTitleInfoViewGradientBackground";

static NSString *quotes_stockTitleInfoViewTextStockTagBackgroundColorKey = @"quotes_stockTitleInfoViewTextStockTagBackground";
static NSString *quotes_stockMapItemViewBackgroundColorKey = @"quotes_stockMapItemViewBackground";
static NSString *quotes_stockMapItemViewBorderColorKey = @"quotes_stockMapItemViewBorderColor";

static NSString *clearColorKey = @"system_clear";
