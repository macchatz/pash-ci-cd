 curl -s -H "Authorization: token ${GH_TOKEN}" \
 -X POST -d '{"body": $(tail -n 10 results.log)}' \
 "https://api.github.com/repos/dkarnikis/circle-ci-bot/issues/3/comments"
