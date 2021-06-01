//
//  CMSMultiColStocksViewProtocol.h
//  CMSPaaS
//
//  Created by sway on 2021/3/25.
//

#import <Foundation/Foundation.h>
#import "CMSStockProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@protocol CMSMultiColStocksViewProtocol <NSObject>
- (void)setMultiColStocks:(NSArray <id<CMSStockProtocol>> *)stocks;
- (void)viewWillAppear;
- (void)viewWillDisappear;
@end

NS_ASSUME_NONNULL_END
