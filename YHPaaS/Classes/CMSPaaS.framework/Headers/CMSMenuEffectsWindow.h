//
//  GMenuEffectsWindow.h
//  GMenuController
//
//  Created by GIKI on 2017/9/27.
//  Copyright © 2017年 GIKI. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CMSMenuViewContainer;
@interface CMSMenuEffectsWindow : UIWindow

@property(nonatomic,getter=isMenuVisible) BOOL menuVisible;        // default is NO

+ (instancetype)sharedWindow;

- (void)showMenu:(CMSMenuViewContainer *)menu
       animation:(BOOL)animation;

- (void)hideMenu:(CMSMenuViewContainer *)menu;

@end
    
