apt-get update; apt-get install curl
curl   -X POST   -H "Accept: application/vnd.github.v3+json"   -H "Authorization: Bearer $GH_TOKEN"   https://api.github.com/repos/dkarnikis/circle-ci-bot/pull/3/comments   -d '{"body":"Hello Github!"}'
