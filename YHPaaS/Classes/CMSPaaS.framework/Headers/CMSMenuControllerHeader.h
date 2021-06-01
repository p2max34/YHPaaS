//
//  GMenuControllerHeader.h
//  GMenuController
//
//  Created by GIKI on 2017/10/19.
//  Copyright © 2017年 GIKI. All rights reserved.
//

#ifndef GMenuControllerHeader_h
#define GMenuControllerHeader_h

typedef NS_ENUM(NSUInteger, CMSMenuControllerArrowDirection) {
    CMSMenuControllerArrowDefault,   // up or down based on screen location
    CMSMenuControllerArrowUp ,       // Forced upward. If the screen is not displayed,  Will do anchor displacement
    CMSMenuControllerArrowDown ,     // Forced down
};

UIKIT_EXTERN NSNotificationName const CMSMenuControllerWillShowMenuNotification;
UIKIT_EXTERN NSNotificationName const CMSMenuControllerDidShowMenuNotification;
UIKIT_EXTERN NSNotificationName const CMSMenuControllerWillHideMenuNotification;
UIKIT_EXTERN NSNotificationName const CMSMenuControllerDidHideMenuNotification;
UIKIT_EXTERN NSNotificationName const CMSMenuControllerMenuFrameDidChangeNotification;

#endif /* GMenuControllerHeader_h */
