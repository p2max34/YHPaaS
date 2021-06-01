//
//  YHTNumberKeyboardView.h
//  cmsmobilesecurities
//
//  Created by 蒲公英 on 2020/11/19.
//  Copyright © 2020 cms. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YHTKeyboardBaseView.h"

@interface YHTNumberKeyboardView : YHTKeyboardBaseView

- (instancetype)initWithFrame:(CGRect)frame
                 keyboardType:(YHTSupportKeyboardType)type
             keyboardDelegate:(id<YHTKeyboardViewDelegate>)keyboardDelegate;

@end
