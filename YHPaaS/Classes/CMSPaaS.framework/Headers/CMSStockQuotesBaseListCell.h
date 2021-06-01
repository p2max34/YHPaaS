//
//  CMSStockQuotesBaseListCell.h
//  CMSPaaS
//
//  Created by 吴演 on 2021/5/18.
//

#import <UIKit/UIKit.h>
#import "CMSServicesManager.h"
#import "UIView+CMSBackground.h"
#import "NSObject+CMSProperty.h"
#import "CMSStockHorizontalCollectionView.h"
#import "UIImageView+CMSResource.h"
#import "UIColor+CMSFactory.h"
#import "UIFont+CMSFactory.h"
#import "UIView+CMSLayout.h"
#import "EXTScope.h"
#import "CMSStockQuotesBinder.h"
#import "CMSSelfSelectStockViewController.h"
#import "CMSStockQuotes.h"
#import "CMSCollectionViewMeanWidthLayout.h"
#import "UIFont+CMSFactory.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSStockQuotesBaseListCell : UITableViewCell

@property (nonatomic, assign) CGFloat leftColumnWidth;
@property (nonatomic, strong) UILabel *stockNameLB;
@property (nonatomic, strong) UILabel *stockCodeLB;
@property (nonatomic, assign) NSUInteger otherColumnNumPerScreen;//一屏幕可容几个cell(需先于keysArray配置)
@property (nonatomic, copy) NSString *firstColumnWidth;//左边股票标题区域占比，判断有“%"则为比例，无则为固定值(需先于keysArray配置)
@property (nonatomic, strong) id<CMSStockProtocol> model;
@property (nonatomic, copy) NSArray<CMSStockHeaderModel *> *keysArray;
@property (nonatomic, strong) UIImageView *shadowImgView;
@property (nonatomic, strong) CMSStockHorizontalCollectionView *collectionView;
@property (nonatomic, strong) NSArray *quotesProperties;
@property (nonatomic, assign) BOOL needPush;        //是否推送数据
@property (nonatomic, assign) BOOL twinklingWhenValueChanged;   //背景色是否闪动
@property (nonatomic, assign) BOOL isAdapterFont;   //字体是否自适应屏幕

@property (nonatomic, strong) NSMutableDictionary *cacheObserverDic;
@property (strong, nonatomic) UIView *labelPackageView;
@property (nonatomic, assign) CGFloat rightUnitWidth;
@property (nonatomic,nullable, strong) CMSStockQuotesBinder *binder;
@property (strong, nonatomic) UIView *gestureRecognizerView;
@property (nonatomic, strong) UILabel *remarkLabel;
@property (nonatomic, strong) NSArray *observeQuotesKeys;



- (void)setModel:(id<CMSStockProtocol>)model needPushQuote:(BOOL)needPush;

/// 添加cell监听和绑定
- (void)addCellObserveAndStockBinder;
/// 取消cell监听和绑定
- (void)cancelCellObserveAndStockBinder;

- (void)observeStockModel:(id<CMSStockProtocol>)model;
- (void)configRemark;
- (void)updateRemark:(id<CMSStockProtocol>)model;
- (void)updateLogoArrView;
@end

NS_ASSUME_NONNULL_END
