//
//  CMSStockHorizontalCollectionView.h
//  CMSPaaS
//
//  Created by SJ on 2021/4/25.
//

#import <UIKit/UIKit.h>
#import "CMSStockHeaderModel.h"
#import "CMSStockProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSStockHorizontalCollectionView : UICollectionView

@property (nonatomic, copy) NSArray<CMSStockHeaderModel *> *keysArray;
@property (nonatomic, assign) BOOL isScrolling; //是否正在滑动
@property (nonatomic, strong) id<CMSStockProtocol> model;

//cell滑动事件
@property (nonatomic, copy) void(^optionalScrollViewDidScrollBlock)(CGPoint offset);
@property (nonatomic, copy) void(^optionalScrollViewDidEndBlock)(CGPoint offset);
@property (nonatomic, copy) void(^optionalScrollViewWillScrollBlock)(CGPoint offset);
@property (nonatomic, copy) void(^horizontalScrollBlock)(BOOL isScrolling);

@end

@interface CMSStockHorizontalCollectionViewCell : UICollectionViewCell
@end

NS_ASSUME_NONNULL_END
