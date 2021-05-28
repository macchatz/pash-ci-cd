# get the timer in english
date=$(LANG=en_us_88591; date)
# generate the json for the gh message
jq -n --arg msg "$(echo ${date}; echo ''; cat /pash/scripts/results.log )" '{body: $msg}' > git-tmp.txt
# post the message to the gh
curl -s -H "Authorization: token ${1}" \
         -X POST -d @git-tmp.txt  \
         "https://api.github.com/repos/dkarnikis/circle-ci-bot/issues/3/comments"
