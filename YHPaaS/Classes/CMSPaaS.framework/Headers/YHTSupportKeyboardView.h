//
//  YHTSupportKeyboardView.h
//  cmsmobilesecurities
//
//  Created by 蒲公英 on 2020/11/19.
//  Copyright © 2020 cms. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YHTKeyboardView.h"
#import "YHTNumberKeyboardView.h"
#import "YHTAlphabetSwitchKeyboardView.h"
#import "YHTCompositeKeyboardToolBar.h"

@interface YHTSupportKeyboardView : UIView

+ (YHTKeyboardBaseView *)keyboardViewWithKeyboardType:(YHTSupportKeyboardType)keyboardType
                                     keyboardDelegate:(id<YHTKeyboardViewDelegate>)keyboardDelegate;

+ (UIView *)keyboardViewToolBarWithToolBarType:(YHTSupportKeyboardToolType)toolBarType
                           defalutKeyboardType:(YHTKeyboardType)keyboardTyp;

@end
