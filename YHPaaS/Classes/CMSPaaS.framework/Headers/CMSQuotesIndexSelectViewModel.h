//
//  CMSQuotesIndexSelectViewModel.h
//  CMSPaaS
//
//  Created by symbio on 2021/3/4.
//

#import <Foundation/Foundation.h>
#import "CMSStock.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesIndexSelectViewModel : NSObject
/// 所有列表数据
@property (nonatomic, strong) NSArray<id<CMSStockProtocol>> * allStockIndexList;
/// 股指选中列表
@property (nonatomic, strong) NSArray<id<CMSStockProtocol>> *stockIndexSelects;
/// 默认选中的股指列表
@property (nonatomic, strong) NSArray<id<CMSStockProtocol>> *defaultStockIndexSelects;

/// 重置股指选中列表
- (NSArray<id<CMSStockProtocol>> *)resetStockIndexSelects;

/// 顶部标题列表
@property (nonatomic, strong) NSArray<NSString *> *headerTitles;

/// 选中数量
@property (nonatomic, assign) NSInteger selectCount;

/// 第一组列数
@property (nonatomic, assign) NSInteger topColumnCount;
/// 第一组item高度
@property (nonatomic, assign) double topItemHeight;

/// 第二组列数
@property (nonatomic, assign) NSInteger bottomColumnCount;
/// 第二组item高度
@property (nonatomic, assign) double bottomItemHeight;

/// 左右边距
@property (nonatomic, assign) double margin;
/// 左右间距
@property (nonatomic, assign) double interitemSpacing;
/// 上下间距
@property (nonatomic, assign) double lineSpacing;

/// 头部高度
@property (nonatomic, assign) double headerHeight;

///全量刷新股指数据
- (void)updateStockIndexQuotes;

- (instancetype)initWithDefaultStockIndexSelects:(NSArray<id<CMSStockProtocol>> *)indexSelects allStockIndexList:(NSArray<id<CMSStockProtocol>> *)allStockIndexList;

@end

NS_ASSUME_NONNULL_END
