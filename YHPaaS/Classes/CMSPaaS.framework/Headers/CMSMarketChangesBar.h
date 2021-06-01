//
//  CMSMarketChangesBar.h
//  CMSPaaS
//
//  Created by sway on 2021/4/15.
//

#import <UIKit/UIKit.h>
#import "CMSMarketChangeInfo.h"

NS_ASSUME_NONNULL_BEGIN
typedef void(^CMSMarketChangesBarDidSelectedBlock)(CMSMarketChangeInfo *selectItem);

@interface CMSMarketChangesBar : UIView
- (instancetype)initWithFrame:(CGRect)frame
                        title:(NSString *)title
                        date:(NSString *)date
                         type:(NSString *)type
                        changeRate:(NSNumber *)changeRate
                        clickedBlock:(CMSMarketChangesBarDidSelectedBlock)clickedBlock;
@property (nonatomic, strong) CMSMarketChangeInfo *item;
@property (nonatomic, copy) CMSMarketChangesBarDidSelectedBlock clickedBlock;

@end

NS_ASSUME_NONNULL_END
