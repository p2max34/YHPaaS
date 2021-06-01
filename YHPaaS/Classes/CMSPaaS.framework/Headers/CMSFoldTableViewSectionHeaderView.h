//
//  CMSFoldTableViewSectionHeaderView.h
//  CMSPaaSBenchmark
//
//  Created 吴演 on 2020/9/9.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSFoldTableViewSectionHeaderViewProtocol.h"

typedef void(^menuClickBlock)(void);

NS_ASSUME_NONNULL_BEGIN

@interface CMSFoldTableViewSectionHeaderView : UITableViewHeaderFooterView<CMSFoldTableViewSectionHeaderViewProtocol>

@property(nonatomic,copy) menuClickBlock menuBlock;

- (void)setArrowsImage:(UIImage *)image;
- (void)setMenuImage:(UIImage *)image;
- (void)setTitle:(NSString *)title;

@end

NS_ASSUME_NONNULL_END


