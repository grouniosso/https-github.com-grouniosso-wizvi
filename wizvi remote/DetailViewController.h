//
//  DetailViewController.h
//  wizvi remote
//
//  Created by gilles on 20/07/2018.
//  Copyright © 2018 gilles. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "wizvi_remote+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

