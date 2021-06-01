//
//  CMSSelfSelectStockIndexHeaderView.h
//  CMSPaaS
//
//  Created by liuyanliang on 2021/1/25.
//

#import <UIKit/UIKit.h>
#import "CMSStockProtocol.h"

@interface CMSSelfSelectStockIndexHeaderView : UIView

@property (nonatomic, copy) NSArray<id<CMSStockProtocol>> *stockIndexes;
@property (nonatomic, copy) void(^stockIndexSelectedBlock)(id<CMSStockProtocol> selectedStockIndex, NSArray<id<CMSStockProtocol>> *stockIndexes);
@property (nonatomic, copy) void(^multiStocksButtonClick)(void);
- (void)cancelObserver;
- (void)addObserver;
@end

