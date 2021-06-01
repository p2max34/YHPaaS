//
//  GAdjustButton.h
//  GMenuController
//
//  Created by GIKI on 2017/10/19.
//  Copyright © 2017年 GIKI. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, CMSAdjustButtonIMGPosition) {
    CMSAdjustButtonIMGPositionLeft = 0, //Default
    CMSAdjustButtonIMGPositionRight,
    CMSAdjustButtonIMGPositionTop,
    CMSAdjustButtonIMGPositionBottom,
};

@interface CMSAdjustButton : UIButton

@property (nonatomic, assign) CMSAdjustButtonIMGPosition  imagePosition;

@end
