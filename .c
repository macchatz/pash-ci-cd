v=$(tail -n 10 /pash/results.log)
echo "|$v|"
echo "${GH_TOKEN}"
curl -s -H "Authorization: token ${GH_TOKEN}" \
 -X POST -d '{"body": "$v" }' \
 "https://api.github.com/repos/dkarnikis/circle-ci-bot/issues/3/comments"
