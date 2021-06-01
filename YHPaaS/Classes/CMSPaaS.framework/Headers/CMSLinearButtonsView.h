//
//  CMSLinearButtonsView.h
//  CMSPaaS
//
//  Created by sway on 2020/9/7.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class CMSLinearButtonItem;

@interface CMSLinearButtonItem : NSObject

@property (nonatomic, copy)     NSString    *title;
@property (nonatomic, strong)   UIFont      *titleTextFont;
@property (nonatomic, strong)   UIColor     *titleTextColor;
@property (nonatomic, strong)   UIColor     *titleBackgroundColor;
@end

typedef void(^CMSLinearButtonDidSelectedBlock)(CMSLinearButtonItem *selectItem,NSInteger index);

@interface CMSLinearButtonsView : UIView
@property (nonatomic, copy) CMSLinearButtonDidSelectedBlock didSelectedBlock;
@property (nonatomic, strong) NSArray<CMSLinearButtonItem *> *items;

- (instancetype)initWithFrame:(CGRect)frame items:(NSArray<CMSLinearButtonItem *> *)items;

@end

NS_ASSUME_NONNULL_END

