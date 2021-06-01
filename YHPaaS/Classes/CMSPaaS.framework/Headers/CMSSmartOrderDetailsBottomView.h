//
//  CMSSmartOrderDetailsBottomView.h
//  CMSPaaSBenchmark
//
//  Created by love on 2020/11/24.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartOrderDetailsBottomView : UIView
@property (nonatomic, strong) void(^didSelectBlock)(NSInteger index);
@property (nonatomic, strong) NSArray<NSString *> *buttonTitleList;
@end

NS_ASSUME_NONNULL_END
