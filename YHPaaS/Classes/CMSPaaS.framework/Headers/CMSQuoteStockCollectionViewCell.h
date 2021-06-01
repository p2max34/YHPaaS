//
//  CMSQuoteStockCollectionViewCell.h
//  Pods-CMSPaaSBenchmark
//
//  Created by 吴演 on 2021/1/11.
//

#import <UIKit/UIKit.h>
#import <Masonry/Masonry.h>
#import "CMSMarketColorUtils.h"
#import "UIColor+CMSFactory.h"
#import "CMSCollectionViewMeanWidthLayout.h"
#import "CMSThemeManager.h"
#import <KVOController/NSObject+FBKVOController.h>
#import "CMSMarketColorUtils.h"
#import "UIView+CMSBackground.h"
#import "UIView+CMSLayout.h"
#import <YYModel/YYModel.h>
#import "CMSStockProtocol.h"
#import "CMSStockBlockModel.h"
#import "CMSStockQuotesBinder.h"
@class CMSQuoteStockCollectionViewCellLayout;

NS_ASSUME_NONNULL_BEGIN
@interface CMSQuoteStockCollectionViewSubItemModel : NSObject
@property (nonatomic, copy) NSString *text;
@property (nonatomic, nullable, strong) UIColor *textColor;
@property (nonatomic, nullable, copy) NSString *textColorKey;
/// 默认的字体大小满足大多业务需求, 仅仅在涨幅涨速时候需要设置
@property (nonatomic, nullable, strong) UIFont *font;
/// 是否加粗,内部已经处理, 非特殊情况, 不需要使用该字段
//@property (nonatomic, nullable, strong) NSNumber *isBold;
@end

@interface CMSQuoteStockCollectionViewItemModel : NSObject

@property (nonatomic, copy) NSString *title;
//@property (nonatomic, strong) NSNumber *titleFontSize;
@property (nonatomic, strong) UIFont *titleFont;
@property (nonatomic, nullable, strong) id<CMSStockProtocol> stock;
@property (nonatomic, nullable, strong) CMSStockBlockModel * stockBlock;

@property (nonatomic,nullable, copy) NSString *titleTag;
@property (nonatomic, copy) NSArray<CMSQuoteStockCollectionViewSubItemModel *> *firstRows;
@property (nonatomic, copy) NSArray<CMSQuoteStockCollectionViewSubItemModel *> *secondRows;
@property (nonatomic, nullable, strong) NSNumber *titleTopPadding;
@property (nonatomic, nullable, strong) NSNumber *firstRowTopPadding;
@property (nonatomic, nullable, strong) NSNumber *secondRowTopPadding;
@property (nonatomic,nullable, strong) CMSStockQuotesBinder *stockQuotesBinder;
@property (nonatomic, strong) CMSQuoteStockCollectionViewCellLayout *layout;

/// 左右边距, 默认为左右顶边
@property (nonatomic, assign) float sidePadding;
@property (nonatomic, assign) BOOL showUpColor;
@property (nonatomic, assign) BOOL showDownColor;
@property (nonatomic, assign) BOOL showSilentColor;

@property (nonatomic, assign) BOOL showColorAnimation;
/// 背景颜色, 默认白色
@property (nonatomic,nullable, copy) NSString *backgroundColorKey;
@property (nonatomic,nullable, strong) NSNumber *centerPadding;

/// 生成模型, firstCount: 第一行的item个数, secondCount:第二行个数
- (instancetype)initWithRowFirstCount:(NSInteger)firstCount secondCount:(NSInteger)secondCount;
/// firstCount: 第一行的item 1个, secondCount: 2个, 字体用的通用字体, 拿到该数据源一般只需修改text, textcolorkey
- (instancetype)initCommon;

@end

@interface CMSQuoteStockCollectionItemView : UIView
@property (nonatomic, strong) CMSQuoteStockCollectionViewItemModel *model;
@property (nonatomic, assign) BOOL needTheme;
@property (nonatomic, strong) UILabel *titleLabel;
- (void)showGradiantColorIsUp:(BOOL)isup;
@end

@interface CMSQuoteStockCollectionViewCell : UICollectionViewCell
@property (nonatomic, strong) CMSQuoteStockCollectionViewItemModel *model;
@property (nonatomic, assign) BOOL needTheme;
@end
NS_ASSUME_NONNULL_END
