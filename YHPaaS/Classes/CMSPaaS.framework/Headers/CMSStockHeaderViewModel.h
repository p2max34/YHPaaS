//
//  CMSStockHeaderViewModel.h
//  CMSPaaS
//
//  Created by symbio on 2021/1/29.
//

#import <Foundation/Foundation.h>
#import "CMSStockHeaderModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSStockHeaderViewModel : NSObject
/// 所有列表数据
@property (nonatomic, strong) NSArray<CMSStockHeaderModel *> * allStockHeaderList;

@property (nonatomic, copy) NSString *firstColumnWidth;
@property (nonatomic, assign) NSInteger otherColumnNumPerScreen;

/// 重置列表
- (NSArray<CMSStockHeaderModel *> *)resetStockHeaderList;

/// 列表中可见的数据
@property (nonatomic, strong, readonly) NSArray<CMSStockHeaderModel *> * visibleStockHeaderItems;

/// 列表中可编辑的数据
@property (nonatomic, strong, readonly) NSArray<CMSStockHeaderModel *> * canEditStockHeaderItems;
/// 列表中不可编辑的数据
@property (nonatomic, strong, readonly) NSArray<CMSStockHeaderModel *> * cannotEditStockHeaderItems;
/// 数据加载
- (void)loadData;

/// 更新本地保存的数据
/// @param list 数据
- (BOOL)updateDataWithList:(NSArray<CMSStockHeaderModel *> *)list;
@end

NS_ASSUME_NONNULL_END


