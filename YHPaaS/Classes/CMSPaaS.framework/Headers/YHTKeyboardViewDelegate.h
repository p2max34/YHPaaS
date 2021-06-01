//
//  YHTKeyboardViewDelegate.h
//  cmsmobilesecurities
//
//  Created by 蒲公英 on 2020/11/19.
//  Copyright © 2020 cms. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, YHTKeyboardType) {
    YHTKeyboardTypeCustomize,
    YHTKeyboardTypeSystem
};

@protocol YHTKeyboardViewDelegate <NSObject>

@optional
- (void)confrim;//确定

@end

@protocol YHTKeyboardToolBarDelegate <NSObject>

- (void)toolBarDismissKeyboard;

@optional
- (void)toolBarSwitchKeyboardType:(YHTKeyboardType)keyboardType;
- (void)volumnChange:(NSInteger)volumn;

@end
