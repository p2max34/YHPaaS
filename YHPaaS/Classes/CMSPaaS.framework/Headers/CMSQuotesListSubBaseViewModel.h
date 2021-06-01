//
//  CMSQuotesListSubBaseViewModel.h
//  CMSPaaS
//
//  Created by 吴演 on 2021/5/13.
//

#import <Foundation/Foundation.h>
#import "CMSSelfSelectStockListView.h"
#import "CMSQuotesListDetailTypeModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesListSubBaseViewModel : NSObject
/// 当前配置
@property (nonatomic, strong) CMSQuotesListDetailTypeModel *typeModel;
/// 数据源
@property (nonatomic, strong) NSArray<id<CMSStockProtocol>>  *stockCellModels;
@property (nonatomic, copy) NSArray<CMSStockHeaderModel *> *currentHeaders;   //当前表头
@property (nonatomic, strong) CMSSelfSelectStockSortInfo *sort;
@property (nonatomic, assign) NSInteger startIndex;
@property (nonatomic, assign) NSInteger count;
@property (nonatomic, assign) NSInteger totalCount;
@property (nonatomic, assign) BOOL isLocalDatas;
/// 上下拉刷新接口
/// @param isMore YES:上拉加载更多 NO:下拉刷新数据
- (void)loadDataWithIsMore:(BOOL)isMore;
/// 定时器刷新部分数据接口
/// @param startIndex 开始角标
- (void)loadPartOfDataFromIndex:(NSInteger)startIndex;
/// 获取对应的小cell
- (NSString *)getCellClassName;
/// 开始排序
- (void)startSort;

+ (Class)getViewModelClassWithType:(NSString *)type;

#pragma mark - private
- (NSArray<NSString *> *)getStingListWithPropertys:(NSArray<CMSStockHeaderModel *> *)propertys;

@end

NS_ASSUME_NONNULL_END
