//
//  GMenuDefaultView.h
//  GMenuController
//
//  Created by GIKI on 2017/9/29.
//  Copyright © 2017年 GIKI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSMenuControllerHeader.h"
@class CMSMenuItem,CMSMenuViewContainer;

@interface CMSMenuDefaultView : UIView

@property (nonatomic, strong) NSArray<CMSMenuItem*>* menuItems;
@property (nonatomic, assign) CGSize  maxSize;
@property (nonatomic, assign) CGSize  arrowSize;
@property (nonatomic, assign) CGPoint anchorPoint;
@property (nonatomic, strong) UIColor  *menuTintColor;
@property (nonatomic, assign) CMSMenuControllerArrowDirection  CorrectDirection;

+ (instancetype)defaultView:(CMSMenuViewContainer*)container
              WithMenuItems:(NSArray<CMSMenuItem*>*)menuItems
                    MaxSize:(CGSize)maxSize
                  arrowSize:(CGSize)arrowSize
                AnchorPoint:(CGPoint)anchorPoint;

- (void)processLineWithMidX:(CGFloat)midX
                  direction:(CMSMenuControllerArrowDirection)direction;
@end
