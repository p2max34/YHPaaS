//
//  CMSQuoteMarketPreviewCellViewModel.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/25.
//

#import <Foundation/Foundation.h>
#import "CMSQuotesCellViewModel.h"
#import "CMSHistogramModel.h"

@interface CMSQuoteMarketPreviewCellViewModel : CMSQuotesCellViewModel
/// A股沪深 数据总览 柱状图
@property (nonatomic, strong) NSArray<CMSHistogramModel *>   *histogramDatas;
/// A股沪深 数据总览 盘后点评
@property (nonatomic, strong) CMSQuotesCommentModel   *marketCommentModel;
/// A股沪深 数据总览 横向水平统计线
@property (nonatomic, strong) NSDictionary<NSString *,NSString *>   *horizontalBarDatas;
/// A股板块 主力流入柱状图
//@property (nonatomic, strong) NSMutableDictionary<NSString *,NSArray<CMSHistogramModel *> *>   *inflowDatas;
@property (nonatomic, strong) NSArray<CMSHistogramModel *>   *industryInflowDatas;
@property (nonatomic, strong) NSArray<CMSHistogramModel *>   *conceptInflowDatas;
@property (nonatomic, strong) NSArray<CMSHistogramModel *>   *regionInflowDatas;
///// A股沪深 数据总览 两市成交额
//@property (nonatomic, strong) NSString   *marketTotalSum;

/// A股沪深 数据总览 柱状图 和 数据总览 横向水平统计线
- (void)loadMarketPreviewData;
/// A股沪深 数据总览 盘后点评
- (void)loadMarketCommentData;
/// A股板块 主力流入柱状图  加载所有的数据 （行业主力流入，概念主力流入，地区主力流入）
- (void)loadMarketMainInflowData;

@end

