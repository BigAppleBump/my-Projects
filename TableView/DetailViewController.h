//
//  DetailViewController.h
//  TableView
//
//  Created by Kapilan Karunanathan on 1/16/12.
//  Copyright (c) 2012 We Are Designers. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController {

    IBOutlet UILabel *label;
    NSString *selectedCountry;

}

@property (retain,nonatomic) UILabel *label;
@property (retain,nonatomic) NSString *selectedCountry;
@end
