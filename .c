date=$(LANG=en_us_88591; date)
apt-get install jq
jq -n --arg msg "$(echo ${date}; echo ''; tail -n 10 /pash/results.log )" '{body: $msg}' > git-tmp.txt
curl -s -H "Authorization: token ${GH_TOKEN}" \
         -X POST -d @git-tmp.txt  \
         "https://api.github.com/repos/dkarnikis/circle-ci-bot/issues/3/comments"
