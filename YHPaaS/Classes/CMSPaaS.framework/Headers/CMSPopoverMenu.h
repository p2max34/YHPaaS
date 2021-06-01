//
//  CMSPopoverMenu.h
//  PopoverMenuDemo
//
//  Created 吴演 on 2020/8/24.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSPopoverMenuItem.h"

typedef void(^PopoverMenuDidSelectedBlock)(CMSPopoverMenuItem *selectItem);

@interface CMSPopoverMenu : UIView

+ (void)showRelyOnView:(UIView *)view withItems:(NSArray<CMSPopoverMenuItem *> *)items clickedBlock:(PopoverMenuDidSelectedBlock)clickedBlock;
+ (void)showRelyOnFrame:(CGRect)rect withItems:(NSArray<CMSPopoverMenuItem *> *)items clickedBlock:(PopoverMenuDidSelectedBlock)clickedBlock;
@end
