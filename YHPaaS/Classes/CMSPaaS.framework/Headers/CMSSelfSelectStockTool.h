//
//  CMSSelfSelectStockTool.h
//  CMSPaaS
//
//  Created by symbio on 2021/2/2.
//

#import <Foundation/Foundation.h>
#import "CMSStockHeaderModel.h"
#import "CMSStockProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSSelfSelectStockTool : NSObject
/// 更新自选股表头列表
+ (BOOL)updateSelfSelectStockProperties:(NSArray<CMSStockHeaderModel *> *)properties;

/// 自选股表头属性当前列表
+ (NSArray<CMSStockHeaderModel *> *)selfSelectStockHeaderProperties;
/// 获取自选股选中指数列表
+ (NSArray<id<CMSStockProtocol>> *)getSelfSelectStockSelectIndexList;
/// 更新自选股选中指数列表
+ (BOOL)updateSelfSelectStockSelectIndexList:(NSArray<id<CMSStockProtocol>> *)indexList;

@end

NS_ASSUME_NONNULL_END
