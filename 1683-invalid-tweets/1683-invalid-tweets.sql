# Write your MySQL query statement below
select tweet_id from Tweets 
where char_length(content) >15;
#char_length() gives length of string in character
#where as length() gives length of string in bytes